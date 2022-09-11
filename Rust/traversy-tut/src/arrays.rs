pub fn run(){
  print!("\n----------TUPLES  && ARRAYS FILE----------------\n");
let person: (&str,&str,i8) = ("Brad", "Mass", 37);
println!("{} is from {} and is {}", person.0,person.1,person.2);

let numbers: [i32;5] = [1,2,3,4,5];

println!("{:?}", numbers);
println!("Array occcupies {} bytes", std::mem::size_of_val(&numbers));
let slice : &[i32] = &numbers[0..2];
println!("Slice {:?}", slice);

print!("\n----------VECTORS----------------\n");
let mut numbers_vector: Vec<i32> = vec![1,2,3,4];
numbers_vector.push(5);
numbers_vector.pop();
println!("Vector occcupies {} bytes", std::mem::size_of_val(&numbers_vector));
println!("{:?}", numbers_vector);

for x in numbers_vector.iter_mut() {
  *x *=2;
}

for x in numbers_vector.iter() {
  print!("{},", x);
}
}