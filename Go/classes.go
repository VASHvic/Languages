package main

import (
	"fmt"
)

type Animaler interface  {
Eat()	
Move()
Speak()
Error()
}


type SuperAnimals struct {
	locomotion string
}

type Animals struct {
	SuperAnimals
	food string
	sound string
}

func (x Animals) Eat(){
	fmt.Println(x.food)
}
func (x Animals) Move(){
	fmt.Println(x.locomotion)
}
func (x Animals) Speak(){
	fmt.Println(x.sound)
}
func (x Animals) Error(){
	fmt.Println("Invalid query")
}

func main(){
	m := map[string]Animals{
		"cow": Animals{SuperAnimals{"walk"}, "grass", "moo"},
		"bird": Animals{SuperAnimals{"walk"}, "worms", "peep"},
		"snake": Animals{SuperAnimals{"walk"}, "mice", "hss"},
}
for i :=0; i< 3 ; i++ {
	fmt.Println("Enter an animal and a movement")
	fmt.Print(">")
	var animal,op string
	fmt.Scan(&animal)
	fmt.Print(">")
	fmt.Scan(&op)
	if op == "eat" {
		m[animal].Eat()
	}	else if op == "move" {
		m[animal].Move()
	}	else if op == "speak" {
		m[animal].Speak()
	}	else {
		m[animal].Error()
	}
	
}
}