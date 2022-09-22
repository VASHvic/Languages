pub fn run(){
  print!("\n----------POINTERS FILE----------------\n");
  //Primitive value
  let arr1= [1,2,3];
  let _arr2:[i32;3] = arr1;

  print!("Values: {:?}", (arr1,_arr2));
  //Vector (not primitive), need to pass a reference
  let vec1= vec![1,2,3];
  let _vec2 = &vec1;
  print!("Values: {:?}", (&vec1,_vec2));


}