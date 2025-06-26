NAME = 27tester

# jic
TARGET = $(shell (cd ..; pwd) | awk -F '/' '{print $$NF}')
PATH = $(shell (cd ..; pwd))

27 = $(PATH)/27tester

CONFIG = $(27)/config.toml

MAKE = make -s

all: $(NAME)

$(NAME):
	@clear
	@if ! [ -a $(CONFIG) ]; then \
		$(MAKE) $(CONFIG); else \
		echo "All set."; \
	fi
	@echo Test finished.

# bash scripts/setup.sh $(TARGET); \

### --- Configuration setup, first-launch variable definitions, etc --- ###

$(CONFIG):
	@echo Generating $(CONFIG)...
	@sh scripts/gen-config.sh $(CONFIG)

### --- Debug instructions --- ###

re: .rm-config $(NAME)

.rm-config:
	@rm -f $(CONFIG)

fix:
	@clear
	@echo Running "fix-config"
	@rm -f $(CONFIG)
	@$(MAKE) $(CONFIG)


### --- Usage instructions, banner --- ###

help:
	@bash $(27)/scripts/menu-help.sh
