NAME: makemake

# jic
TARGET_RELATIVE = $(shell (cd ..; pwd) | awk -F '/' '{print $$NF}')
TARGET = $(shell (cd ..; pwd))

CONFIG = $(TARGET)/.27tester

MAKE = make -s

all: $(NAME)

fix: .fix-config

$(NAME):
	@clear
	@if ! [ -a $(CONFIG) ]; then \
		$(MAKE) $(CONFIG); \
	fi
	@echo Test finished.


### --- Configuration setup, first-launch variable definitions, etc --- ###

$(CONFIG):
	@echo Generating $(CONFIG)...
	@sh scripts/gen-config.sh $(CONFIG)

### --- Debug instructions --- ###

.fix-config:
	@clear
	@echo Running "fix-config"
	@rm -f $(CONFIG)
	@$(MAKE) $(CONFIG)



### --- Usage instructions, banner --- ###

help:
	@sh scripts/menu-help.sh