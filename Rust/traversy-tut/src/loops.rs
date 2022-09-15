pub fn run() {
  print!("\n----------LOOPS FILE----------------\n");
  let mut count = 0;
  loop {
    count += 1;
    println!("Number: {}", count);
    if count == 2 {
      break;
    }
  }
  //while fizbuz
  while count <= 100 {
    if count % 15 == 0 {
      print!("fizzbuz")
    } else if count % 3 == 0 {
      print!("fizz")
    }else if count % 5 == 0 {
      println!("buzz");
    }else {
      print!("{}", count);
    }
    count +=1;
  }

  for x in 0..100 {
    if x == 50 {
      println!("NUmber 50: {}",x)
    }
  }
}