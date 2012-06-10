package main

import "gosic"

func main() {
	println("      INIT:", gosic.Init())
	println("GLOBAL VAR:", gosic.String())
	println("GLOBAL VAR:", gosic.Integer())
}
