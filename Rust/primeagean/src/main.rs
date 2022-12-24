// #![allow(dead_code)]
fn print_out_item(item: &Vec<u32>){

    for i in item{
        println!("{}",i);
    }
}
fn reverse_and_print(foo: &Vec<Foo>){
    for f in foo.iter().rev() {
        println!("{:?}",f);
    }
}
fn reverse_and_print2(foo: &mut Vec<Foo>){
    foo.reverse();
    for f in foo.iter() {
        println!("{:?}",f);
    }
}

#[derive(Debug)]
struct Foo{
    value:usize,
}
fn main() {
    let item = vec![1,2,3];
    print_out_item(&item);
    print_out_item(&item);

    let vector = vec![Foo{value:1},Foo{value:2}];
    let vector2 = vec![Foo{value:3},Foo{value:4}];
    let mut vector3 = vec![Foo{value:3},Foo{value:4}];
    let last_foo = vector.last();
    // vector.pop();
    println!("last foo {:?}",last_foo);

    reverse_and_print(&vector2);
    println!("Ara cambia el orden");
    reverse_and_print2(&mut vector3);
    reverse_and_print2(&mut vector3);

}
