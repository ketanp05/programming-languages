package main

import (
	"fmt"
	"reflect"
)

func main() {
	fmt.Println("Hello World!")

	// this version of declaration works if variables are of the same data type
	var name, divison string = "Ketan", "Elite"
	fmt.Printf("%s is in the %v division \n", name, divison)

	// say if the variables are of different data types then the following declaration works
	// each variable will be declared in new line
	var (
		age   int    = 25
		state string = "washington"
	)

	// short declaration of variables
	// here compiler implicitly assigns string type to address. the address does not have to be the value, it can be changed later. its the way to tell the compilerl that address is of type string
	address := "hey go this is a string"

	// say if you change the address value then this new value will be considered hence forward
	address = "hancock mi"

	fmt.Printf("He is %d years old from the state of %s living in the area %s\n", age, state, address)

	// variables and their types with TypeOf
	fmt.Printf("Type: %v \n", reflect.TypeOf(7))
	fmt.Printf("Type: %v \n", reflect.TypeOf("Ketan"))

	var empid int
	var department string

	// empid := 0 // this is an integer
	// department := "This is the company's dept"

	fmt.Print("Enter emp id and dept name: \n")
	fmt.Scanf("%d", &empid)
	fmt.Scanf("%s", &department)
	fmt.Printf("Wecome %s, your id is %d and department is %s \n", name, empid, department)

	// array declarations
	var fruits [2]string = [2]string{"apples", "oranges"}
	total_grades := [...]int{10, 20, 30, 40, 50, 60}
	physics_marks := [...]int{30, 33, 44, 54, 42}

	fmt.Println(fruits)
	fmt.Println(total_grades)
	fmt.Println(physics_marks)

	fmt.Println("overall grades less than 40")
	for i := 0; i < len(total_grades)-1; i++ {
		if total_grades[i] <= 40 {
			fmt.Println(total_grades[i])
		}
	}

	fmt.Println("marks in physics out of 50")
	for index, value := range physics_marks {
		fmt.Printf("Student %d => %d \n", index+1, value)
	}

	arr := [5]bool{true, true}
	fmt.Println(arr)

}
