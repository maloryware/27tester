TESTS_DIR = .tests

TARGET_RELATIVE = $(shell (cd ..; pwd) | awk -F '/' '{print $$NF}')
TARGET = $(shell (cd ..; pwd))

# watch and learn kids, this is how you obfuscate a default file

CONFIG = $(TARGET)/.27tester

MAKE = make -s

all: test

fix-config:
	@clear
	@echo Running "fix-config"
	@echo CONFIG: $(CONFIG)
	@rm -f $(CONFIG)
	@$(MAKE) $(CONFIG)

test:
	@clear
	@if ! [ -a $(CONFIG) ]; then \
		$(MAKE) $(CONFIG); \
	fi
	@echo Test finished.

$(CONFIG):
	@echo Generating $(CONFIG)...
	@sh scripts/gen-config.sh $(CONFIG) 



