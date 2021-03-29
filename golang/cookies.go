// https://codeforces.com/problemset/problem/129/A
package main

import "fmt"

func main() {
	var quant int
	fmt.Scanf("%d\n", &quant)

	var par int
	var impar int
	var temp int
	var soma int

	for i := 0; i < quant; i++ {
		fmt.Scanf("%d", &temp)
		soma += temp
		if temp%2 == 0 {
			par++
		} else {
			impar++
		}
	}
	if soma%2 == 0 {
		fmt.Printf("%d", par)
	} else {
		fmt.Printf("%d", impar)
	}
}
