PROJ_NAME = Calendar
TEST_PROJ_NAME = Test_$(PROJ_NAME)


SRC =  src/addnote_shownote.c\
src/clscon_Setcon_chkleap.c\
src/getday_chknote_prtmon.c\
src/getname_prtdate_dayno.c\
src/gotooxy_setcolor_clearcolor.c\
src/incmon_decmon_getdays.c

hos_SRC = test_calendar.c

TEST_SRC = test/test_calendar.c\
unity/unity.c\
main.c

INC_H = inc
INC_T = unity
INC_TE=test

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) -I $(INC_TE) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp test/test_calendar.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) -I $(INC_TE) unity/unity.c test/test_calendar.c main.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(hos_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT	
	$(RM) test_calendar.c


cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	
	$(RM) *.DAT
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
