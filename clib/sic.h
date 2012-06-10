#ifndef SIC_H
#define SIC_H 1

#if HAVE_CONFIG_H
#  include <config.h>
#endif

#ifdef _WIN32
#  ifdef DLL_EXPORT
#    define SIC_SCOPE         __declspec(dllexport)
#  else
#    ifdef LIBSIC_DLL_IMPORT
#      define SIC_SCOPE       extern __declspec(dllimport)
#    endif
#  endif
#endif
#ifndef SIC_SCOPE
#  define SIC_SCOPE           extern
#endif

// Variables
SIC_SCOPE const char *sic_string;
SIC_SCOPE const int sic_int;

// Functions
SIC_SCOPE char *SicInit();

#endif /* !SIC_H */
