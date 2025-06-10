TESTS_DIR = .testers
TARGET = $(shell pwd)

test:
	@echo ${TARGET}
	@shell cd ${TARGET}/..
	@echo ${shell pwd}