#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/c7b6e194/airPlane.o \
	${OBJECTDIR}/_ext/c7b6e194/highWing.o \
	${OBJECTDIR}/_ext/c7b6e194/lowWing.o \
	${OBJECTDIR}/_ext/c7b6e194/racer.o \
	${OBJECTDIR}/_ext/c7b6e194/trainer.o \
	${OBJECTDIR}/_ext/c7b6e194/wingType.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/stratigic

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/stratigic: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/stratigic ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/c7b6e194/airPlane.o: /home/gad/DesignPatterns/Stratigic/airPlane.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c7b6e194
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c7b6e194/airPlane.o /home/gad/DesignPatterns/Stratigic/airPlane.cpp

${OBJECTDIR}/_ext/c7b6e194/highWing.o: /home/gad/DesignPatterns/Stratigic/highWing.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c7b6e194
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c7b6e194/highWing.o /home/gad/DesignPatterns/Stratigic/highWing.cpp

${OBJECTDIR}/_ext/c7b6e194/lowWing.o: /home/gad/DesignPatterns/Stratigic/lowWing.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c7b6e194
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c7b6e194/lowWing.o /home/gad/DesignPatterns/Stratigic/lowWing.cpp

${OBJECTDIR}/_ext/c7b6e194/racer.o: /home/gad/DesignPatterns/Stratigic/racer.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c7b6e194
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c7b6e194/racer.o /home/gad/DesignPatterns/Stratigic/racer.cpp

${OBJECTDIR}/_ext/c7b6e194/trainer.o: /home/gad/DesignPatterns/Stratigic/trainer.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c7b6e194
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c7b6e194/trainer.o /home/gad/DesignPatterns/Stratigic/trainer.cpp

${OBJECTDIR}/_ext/c7b6e194/wingType.o: /home/gad/DesignPatterns/Stratigic/wingType.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/c7b6e194
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/c7b6e194/wingType.o /home/gad/DesignPatterns/Stratigic/wingType.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
