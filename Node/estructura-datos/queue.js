class Queue {
  constructor(...initialValues){
    this.items = [...initialValues];
  }
  append(val){
    this.items.push(val);
  }
  dequeue(){    
    return this.items.shift();
  }
  peek(){
    return this.items[0];
  }
}
console.time("a")
const queue = new Queue(new Array(1000000).fill(1));
queue.append(4);
console.log(queue.dequeue());
console.log(queue);
console.timeEnd("a")
