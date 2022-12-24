
const boxes = [
  { l: 1, w: 1, h: 1 },
  { l: 2, w: 2, h: 2 }
]




function fitsInOneBox(boxes) {
 
  const sizes = boxes.reduce((prev,curr)=> {
    const {l,w,h} = curr;
    prev.length.push(l);
    prev.width.push(w);
    prev.height.push(h);
    return Object.assign({}, prev);
  },{length:[],height:[],width:[]});

  for(const v of Object.values(sizes)){
  v.sort((a,b)=> b-a);
  let counter= 0;  
  for(const num of v){   
      if(counter !== 0 && counter <=  num) return false    
      counter=num;
  }  
}
return true
}
console.log(fitsInOneBox(boxes));
