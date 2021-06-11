TEST_NAME=TEST
TEST_CASE= Test/test.c unity/unity.c

#To check the OS windows or Liux depending on that extension is set
ifdef OS
	RM = del /q
	FixPath=$(subst /,\,$1)
	EXEC=exe
	editor=notepad
else
	ifeq ($(shell uname), Linux)
		RM=rm -rf
		FixPath=$1
			EXEC=out
			editor=cat
	endif
endif

#Makefile will not run target command if the name with the file already exists. To override, use PHONY
.PHONY : all test coverage run clean doc

test:
	gcc Test/test.c -I -c unity/unity.c -o Test/$(TEST_NAME).$(EXEC)
	./Test/$(TEST_NAME).$(EXEC)
