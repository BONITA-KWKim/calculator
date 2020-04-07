# directory
BUILD_BIN=${CALC_HOME}/build/bin
BUILD_LIB=${CALC_HOME}/build/lib
LIB=${CALC_HOME}/library
INC=${CALC_HOME}/include
SRC=${CALC_HOME}/source

# build project
all: basic_lib calculator

## main file
calculator: ${BUILD_BIN}/calculator

${BUILD_BIN}/calculator: ${SRC}/calculator.cc
	g++ -o $@ $^ -I ${INC} -lbasic -L ${BUILD_LIB}

## basic library
basic_lib: ${BUILD_LIB}/libbasic.a

${BUILD_LIB}/libbasic.a: ${BUILD_LIB}/basic.o
	ar -cr $@ $^

${BUILD_LIB}/basic.o:  ${LIB}/basic.cc
	g++ -c -o $@ $^ -I ${INC}

# clean
clean:
	rm -f ${BUILD_BIN}/* ${BUILD_LIB}/*