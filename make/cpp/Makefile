##===----------------------------------------------------------------------===##
#
#
#                            General Makefile
#
#
##===----------------------------------------------------------------------===##
OS = $(shell uname)

ifeq ($(OS), Darwin)
C89 = clang -std=c89
C99 = clang -std=c99
CPP = clang++ -std=c++1z -stdlib=libc++
endif

ifdef WARN
WARN = -Weverything
else
WARN =
endif

ifdef CATCH
CATCH = -DCATCH_CONFIG_MAIN
else
CATCH =
endif

ifdef TEST
TEST = -DENTRY
else
TEST =
endif

CFLAGS = $(WARN) $(CATCH) $(TEST)

INC =
LIB =
lib =

sourcehome = .
exepostfix = .exe
exepostfix =

sourcelist89 = $(basename $(notdir $(wildcard $(sourcehome)/*.c)))
executable89 = $(addsuffix $(exepostfix), $(sourcelist89))

sourcelist17 = $(basename $(notdir $(wildcard $(sourcehome)/*.cpp)))
executable17 = $(addsuffix $(exepostfix), $(sourcelist17))


MAIN =
main: $(MAIN)

all: $(executable89) $(executable17)


%$(exepostfix): %.c
	$(C89) $(CFLAGS) $(INC) -o $@ $< $ $(LIB) ${lib}

%$(exepostfix): %.cpp
	$(CPP) $(CFLAGS) $(INC) -o $@ $< $ $(LIB) ${lib}


.PHONY: clean test

clean:
	rm -rf $(executable89) $(executable17)

test:
	$(MAIN)

##===----------------------------------------------------------------------===##

