function time(target, key, descriptor) {
  // mateixa firma que Object.defineproperty
  const origFunction = descriptor.value.bind(target);
  let i = 0;
  descriptor.value = function (...args) {
    let id = i++;
    console.time(key + id);
    let value = origFunction(...args);
    console.timeEnd1(key + id);

    return value;
  };
}

const fns = {
  squareAll(arr) {
    return arr.map((x) => x * x);
  },
};

console.log(fns.squareAll(Array(25).fill(4)));
