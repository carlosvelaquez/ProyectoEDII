#############################################################################
# Makefile for building: Proyecto
# Generated by qmake (3.0) (Qt 5.5.1)
# Project:  Proyecto.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt5/bin/qmake -o Makefile Proyecto.pro
#############################################################################

MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_DEPRECATED_WARNINGS -DQT_NO_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -m64 -pipe -std=c++11 -O2 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I. -I. -isystem /usr/include/x86_64-linux-gnu/qt5 -isystem /usr/include/x86_64-linux-gnu/qt5/QtWidgets -isystem /usr/include/x86_64-linux-gnu/qt5/QtGui -isystem /usr/include/x86_64-linux-gnu/qt5/QtCore -I. -I. -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64
QMAKE         = /usr/lib/x86_64-linux-gnu/qt5/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = Proyecto1.0.0
DISTDIR = /home/carlos/Escritorio/Proyecto\ Estructura\ de\ Datos\ II/Proyecto/ProyectoEDII/.tmp/Proyecto1.0.0
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS) -L/usr/X11R6/lib64 -lQt5Widgets -lQt5Gui -lQt5Core -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = File.cpp \
		Field.cpp \
		main.cpp \
		MainWindow.cpp \
		BTree.cpp \
		BTreeNode.cpp \
		Key.cpp \
		addrecordwindow.cpp \
		addfieldwindow.cpp \
		listfieldswindow.cpp \
		deletefieldwindow.cpp \
		modifyrecordwindow.cpp \
		modifyfieldwindow.cpp moc_MainWindow.cpp \
		moc_addrecordwindow.cpp \
		moc_addfieldwindow.cpp \
		moc_listfieldswindow.cpp \
		moc_deletefieldwindow.cpp \
		moc_modifyrecordwindow.cpp \
		moc_modifyfieldwindow.cpp
OBJECTS       = File.o \
		Field.o \
		main.o \
		MainWindow.o \
		BTree.o \
		BTreeNode.o \
		Key.o \
		addrecordwindow.o \
		addfieldwindow.o \
		listfieldswindow.o \
		deletefieldwindow.o \
		modifyrecordwindow.o \
		modifyfieldwindow.o \
		moc_MainWindow.o \
		moc_addrecordwindow.o \
		moc_addfieldwindow.o \
		moc_listfieldswindow.o \
		moc_deletefieldwindow.o \
		moc_modifyrecordwindow.o \
		moc_modifyfieldwindow.o
DIST          = /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		Proyecto.pro File.h \
		Field.h \
		List.h \
		MainWindow.h \
		queue.h \
		BTree.h \
		BTreeNode.h \
		Key.h \
		addrecordwindow.h \
		addfieldwindow.h \
		listfieldswindow.h \
		deletefieldwindow.h \
		modifyrecordwindow.h \
		modifyfieldwindow.h File.cpp \
		Field.cpp \
		main.cpp \
		MainWindow.cpp \
		BTree.cpp \
		BTreeNode.cpp \
		Key.cpp \
		addrecordwindow.cpp \
		addfieldwindow.cpp \
		listfieldswindow.cpp \
		deletefieldwindow.cpp \
		modifyrecordwindow.cpp \
		modifyfieldwindow.cpp
QMAKE_TARGET  = Proyecto
DESTDIR       = #avoid trailing-slash linebreak
TARGET        = Proyecto


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

$(TARGET): ui_MainWindow.h ui_addrecordwindow.h ui_addfieldwindow.h ui_listfieldswindow.h ui_deletefieldwindow.h ui_modifyrecordwindow.h ui_modifyfieldwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Proyecto.pro /usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		Proyecto.pro \
		/usr/lib/x86_64-linux-gnu/libQt5Widgets.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Gui.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Core.prl
	$(QMAKE) -o Makefile Proyecto.pro
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf:
.qmake.stash:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf:
Proyecto.pro:
/usr/lib/x86_64-linux-gnu/libQt5Widgets.prl:
/usr/lib/x86_64-linux-gnu/libQt5Gui.prl:
/usr/lib/x86_64-linux-gnu/libQt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile Proyecto.pro

qmake_all: FORCE


all: Makefile $(TARGET)

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents File.h Field.h List.h MainWindow.h queue.h BTree.h BTreeNode.h Key.h addrecordwindow.h addfieldwindow.h listfieldswindow.h deletefieldwindow.h modifyrecordwindow.h modifyfieldwindow.h $(DISTDIR)/
	$(COPY_FILE) --parents File.cpp Field.cpp main.cpp MainWindow.cpp BTree.cpp BTreeNode.cpp Key.cpp addrecordwindow.cpp addfieldwindow.cpp listfieldswindow.cpp deletefieldwindow.cpp modifyrecordwindow.cpp modifyfieldwindow.cpp $(DISTDIR)/
	$(COPY_FILE) --parents MainWindow.ui addrecordwindow.ui addfieldwindow.ui listfieldswindow.ui deletefieldwindow.ui modifyrecordwindow.ui modifyfieldwindow.ui $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) .qmake.stash
	-$(DEL_FILE) Makefile


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all: moc_MainWindow.cpp moc_addrecordwindow.cpp moc_addfieldwindow.cpp moc_listfieldswindow.cpp moc_deletefieldwindow.cpp moc_modifyrecordwindow.cpp moc_modifyfieldwindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_MainWindow.cpp moc_addrecordwindow.cpp moc_addfieldwindow.cpp moc_listfieldswindow.cpp moc_deletefieldwindow.cpp moc_modifyrecordwindow.cpp moc_modifyfieldwindow.cpp
moc_MainWindow.cpp: ui_MainWindow.h \
		File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		MainWindow.h
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/5 -I/usr/include/x86_64-linux-gnu/c++/5 -I/usr/include/c++/5/backward -I/usr/lib/gcc/x86_64-linux-gnu/5/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include MainWindow.h -o moc_MainWindow.cpp

moc_addrecordwindow.cpp: File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		addrecordwindow.h
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/5 -I/usr/include/x86_64-linux-gnu/c++/5 -I/usr/include/c++/5/backward -I/usr/lib/gcc/x86_64-linux-gnu/5/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include addrecordwindow.h -o moc_addrecordwindow.cpp

moc_addfieldwindow.cpp: File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		addfieldwindow.h
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/5 -I/usr/include/x86_64-linux-gnu/c++/5 -I/usr/include/c++/5/backward -I/usr/lib/gcc/x86_64-linux-gnu/5/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include addfieldwindow.h -o moc_addfieldwindow.cpp

moc_listfieldswindow.cpp: File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		listfieldswindow.h
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/5 -I/usr/include/x86_64-linux-gnu/c++/5 -I/usr/include/c++/5/backward -I/usr/lib/gcc/x86_64-linux-gnu/5/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include listfieldswindow.h -o moc_listfieldswindow.cpp

moc_deletefieldwindow.cpp: File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		deletefieldwindow.h
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/5 -I/usr/include/x86_64-linux-gnu/c++/5 -I/usr/include/c++/5/backward -I/usr/lib/gcc/x86_64-linux-gnu/5/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include deletefieldwindow.h -o moc_deletefieldwindow.cpp

moc_modifyrecordwindow.cpp: File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		modifyrecordwindow.h
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/5 -I/usr/include/x86_64-linux-gnu/c++/5 -I/usr/include/c++/5/backward -I/usr/lib/gcc/x86_64-linux-gnu/5/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include modifyrecordwindow.h -o moc_modifyrecordwindow.cpp

moc_modifyfieldwindow.cpp: File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		modifyfieldwindow.h
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I'/home/carlos/Escritorio/Proyecto Estructura de Datos II/Proyecto/ProyectoEDII' -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/5 -I/usr/include/x86_64-linux-gnu/c++/5 -I/usr/include/c++/5/backward -I/usr/lib/gcc/x86_64-linux-gnu/5/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include modifyfieldwindow.h -o moc_modifyfieldwindow.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_MainWindow.h ui_addrecordwindow.h ui_addfieldwindow.h ui_listfieldswindow.h ui_deletefieldwindow.h ui_modifyrecordwindow.h ui_modifyfieldwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_MainWindow.h ui_addrecordwindow.h ui_addfieldwindow.h ui_listfieldswindow.h ui_deletefieldwindow.h ui_modifyrecordwindow.h ui_modifyfieldwindow.h
ui_MainWindow.h: MainWindow.ui
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic MainWindow.ui -o ui_MainWindow.h

ui_addrecordwindow.h: addrecordwindow.ui
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic addrecordwindow.ui -o ui_addrecordwindow.h

ui_addfieldwindow.h: addfieldwindow.ui
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic addfieldwindow.ui -o ui_addfieldwindow.h

ui_listfieldswindow.h: listfieldswindow.ui
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic listfieldswindow.ui -o ui_listfieldswindow.h

ui_deletefieldwindow.h: deletefieldwindow.ui
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic deletefieldwindow.ui -o ui_deletefieldwindow.h

ui_modifyrecordwindow.h: modifyrecordwindow.ui
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic modifyrecordwindow.ui -o ui_modifyrecordwindow.h

ui_modifyfieldwindow.h: modifyfieldwindow.ui
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic modifyfieldwindow.ui -o ui_modifyfieldwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

File.o: File.cpp File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o File.o File.cpp

Field.o: Field.cpp Field.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Field.o Field.cpp

main.o: main.cpp MainWindow.h \
		ui_MainWindow.h \
		File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

MainWindow.o: MainWindow.cpp MainWindow.h \
		ui_MainWindow.h \
		File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		addrecordwindow.h \
		addfieldwindow.h \
		listfieldswindow.h \
		deletefieldwindow.h \
		modifyfieldwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MainWindow.o MainWindow.cpp

BTree.o: BTree.cpp BTree.h \
		BTreeNode.h \
		List.h \
		Key.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BTree.o BTree.cpp

BTreeNode.o: BTreeNode.cpp BTreeNode.h \
		List.h \
		Key.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BTreeNode.o BTreeNode.cpp

Key.o: Key.cpp Key.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Key.o Key.cpp

addrecordwindow.o: addrecordwindow.cpp addrecordwindow.h \
		File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		ui_addrecordwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o addrecordwindow.o addrecordwindow.cpp

addfieldwindow.o: addfieldwindow.cpp addfieldwindow.h \
		File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		ui_addfieldwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o addfieldwindow.o addfieldwindow.cpp

listfieldswindow.o: listfieldswindow.cpp listfieldswindow.h \
		File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		ui_listfieldswindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o listfieldswindow.o listfieldswindow.cpp

deletefieldwindow.o: deletefieldwindow.cpp deletefieldwindow.h \
		File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		ui_deletefieldwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o deletefieldwindow.o deletefieldwindow.cpp

modifyrecordwindow.o: modifyrecordwindow.cpp modifyrecordwindow.h \
		File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		ui_modifyrecordwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o modifyrecordwindow.o modifyrecordwindow.cpp

modifyfieldwindow.o: modifyfieldwindow.cpp modifyfieldwindow.h \
		File.h \
		BTree.h \
		BTreeNode.h \
		List.h \
		Key.h \
		Field.h \
		ui_modifyfieldwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o modifyfieldwindow.o modifyfieldwindow.cpp

moc_MainWindow.o: moc_MainWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_MainWindow.o moc_MainWindow.cpp

moc_addrecordwindow.o: moc_addrecordwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_addrecordwindow.o moc_addrecordwindow.cpp

moc_addfieldwindow.o: moc_addfieldwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_addfieldwindow.o moc_addfieldwindow.cpp

moc_listfieldswindow.o: moc_listfieldswindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_listfieldswindow.o moc_listfieldswindow.cpp

moc_deletefieldwindow.o: moc_deletefieldwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_deletefieldwindow.o moc_deletefieldwindow.cpp

moc_modifyrecordwindow.o: moc_modifyrecordwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_modifyrecordwindow.o moc_modifyrecordwindow.cpp

moc_modifyfieldwindow.o: moc_modifyfieldwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_modifyfieldwindow.o moc_modifyfieldwindow.cpp

####### Install

install:  FORCE

uninstall:  FORCE

FORCE:

