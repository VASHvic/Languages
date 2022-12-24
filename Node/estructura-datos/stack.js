class Stack {
  constructor(...initial){
    this.content = [...initial];
  }
  append(val){
    this.content.push(val);
  }
  remove(){
    return this.content.pop()
  }
}

console.time("a")
const stack = new Stack(new Array(1000000).fill(1));
stack.append(4)
console.log(stack.remove());
console.log(stack);
console.timeEnd("a")