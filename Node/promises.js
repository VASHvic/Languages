const sleepPromise = (delay, value) =>
  new Promise((resolve) => setTimeout(resolve, delay, value));

const sleepTime = (ms, cb) => setTimeout(cb ? () => cb() : null, ms);

console.log("start");
console.time("test"); // mirar pk tarda menos de lo que toca
sleepTime(1000, () => cagar("sleepTIme"));
setTimeout(() => {}, 1000);
const caquis = await sleepPromise(1000, cagar("sleepPromise"));
console.log(caquis);
console.timeEnd("test");
console.log("fin");

function cagar(what) {
  return what;
}
