pub fn run() {
  print!("\n----------FUNCTIONS FILE----------------\n");

  greeting("Hello", "Jane");
  let  get_sum : i32 = add(1,2);
  println!("1 +2 ={}", get_sum);

// Closure
let n3:i32 = 3;
let closure_add = |n1:i32,n2:i32| n1+n2 + n3;
println!("Closure sum {}", closure_add(3,3))
}

fn greeting(greet: &str, name: &str) {
  println!("{} {}, nice to meet you", greet, name);
}
fn add(n1:i32, n2:i32) -> i32 {
  n1 +n2
}