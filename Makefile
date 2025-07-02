NAME = 27tester

# jic
TARGET = $(shell (cd ..; pwd) | awk -F '/' '{print $$NF}')
DIRECTORY = $(shell (cd ..; pwd))

27 = $(DIRECTORY)/27tester

CONFIG = $(27)/config.toml

MAKE = make -s

all: $(NAME)

$(NAME):
	clear
	@if ! [ -a $(CONFIG) ]; then \
		echo First run detected - initializing config...; $(MAKE) $(CONFIG);
	fi
	

# bash scripts/setup.sh $(TARGET); \

### --- Configuration setup, first-launch variable definitions, etc --- ###

$(CONFIG):
	@echo Generating $(CONFIG)...
	@sh scripts/gen-config.sh $(CONFIG)

### --- Debug instructions --- ###

re: .rm-config $(NAME)


.rm-config:
	@rm -f $(CONFIG)

config:
	@clear
	@echo Running "fix-config"
	@rm -f $(CONFIG)
	@$(MAKE) $(CONFIG)


### --- Usage instructions, banner --- ###

help:
	@/usr/bin/bash $(27)/scripts/menu-help.sh
