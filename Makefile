#!/usr/bin/make

APP_NAME=a.out
BIN_DIR=bin
OBJ_DIR=obj
SRC_DIR=src
INC_DIR=inc
LIB_DIR=lib

SRCS_STR=lc_string/lc_bzero.c \
    lc_string/lc_memset.c \
    lc_string/lc_strchr.c \
    lc_string/lc_strlen.c \
    lc_string/lc_strpbrk.c \
    lc_string/lc_index.c \
    lc_string/lc_rindex.c \
    lc_string/lc_strcmp.c \
    lc_string/lc_strncat.c \
    lc_string/lc_strrchr.c \
    lc_string/lc_is_palindrome.c \
    lc_string/lc_stpcpy.c \
	lc_string/lc_strcpy.c \
	lc_string/lc_strncmp.c \
	lc_string/lc_memchr.c \
    lc_string/lc_strcat.c \
    lc_string/lc_strdup.c \
    lc_string/lc_strncpy.c
SRCS_MATH=lc_math/canonical.c \
	lc_math/is_prime.c \
	lc_math/count_divisors.c \
	lc_math/resheto.c \
	lc_math/sum_divisors.c
SRCS=${SRCS_STR} ${SRCS_MATH} main.c

CC=cc
CFLAGS=-Wall -Wextra -Werror -I ${INC_DIR} -L ${LIB_DIR}
LDFLAGS=-lm

OBJS=${addprefix ${OBJ_DIR}/,${SRCS:.c=.o}}

#target: prerequisits
#    actions
# ${}
# $()

all: ${OBJS}
	${CC} ${CFLAGS} -o ${BIN_DIR}/${APP_NAME} ${OBJS} ${LDFLAGS}

${OBJ_DIR}/%.o: ${SRC_DIR}/%.c
	${CC} ${CFLAGS} -c -o $@ $?

print_source:
	@echo ${SRCS}

print_objects:
	@echo ${OBJS}

clean:
	rm -f ${OBJS} ${BIN_DIR}/${APP_NAME}