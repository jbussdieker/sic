#if HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdio.h>

#include "sic.h"

// Variables
const char *sic_string = "Sharing is caring!";
const int sic_int = 5;

// Functions
char *SicInit() {
	printf("  Internal: %s %d\n", sic_string, sic_int);
	return "SIC Loaded!!!!";
}

#if defined WIN32 && defined DLL_EXPORT
char libsic_is_dll(void) {
  return 1;
}
#endif /* WIN32 && DLL_EXPORT */
