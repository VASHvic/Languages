pub fn wolf (sheep: Vec<&str>){

  let wolf_postion:Option<usize> = sheep.iter().position(|p| p == &"wolf");
  if wolf_postion{    
    println!("{}",wolf_postion);
  }
 

}