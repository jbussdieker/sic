package gosic

/*
#cgo CFLAGS: -I../../include
#cgo LDFLAGS: -L../../lib -lsic
#include <sic.h>
*/
import "C"

func Init() string {
	return C.GoString(C.SicInit())
}

