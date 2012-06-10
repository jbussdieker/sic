#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([sic], [0.0.1], [BUG-REPORT-ADDRESS])
AC_CONFIG_SRCDIR([sic.c])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile])
AM_INIT_AUTOMAKE
LT_INIT

# Checks for programs.
AC_PROG_CC
AC_PROG_LIBTOOL

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

LIBSIC_DLL_IMPORT=
case "$host" in
	*-*-cygwin* | *-*-mingw* )
		if test X"$enable_shared" = Xyes; then
			AC_TRY_LINK_FUNC([libsic_is_dll], [LIBSIC_DLL_IMPORT=-DLIBSIC_DLL_IMPORT])
		fi
	;;
esac
AC_SUBST(LIBSIC_DLL_IMPORT)
AC_OUTPUT
