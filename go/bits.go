package main

import (
	"fmt"
	"math"
	"os"
	"strconv"
)

func main() {
	value, err := strconv.ParseFloat(os.Args[1], 64)
	if err != nil {
		panic(err)
	}
	fmt.Println(int(math.Ceil(math.Log2(value))))
}
