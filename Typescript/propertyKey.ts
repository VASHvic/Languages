//Soles poden ser keys de un objecte strs nums o symbols
const str: string = "key";
const num: number = 123;
const sym: symbol = Symbol();

const valid = {
  [str]: "valid",
  [num]: "valid",
  [sym]: "valid",
};
const obj = {};

// const invalid = {
//   [obj]: "invalid",
// };

type ValidKey = keyof any;

//ja está implement en TS com a PropertyKey
type test = PropertyKey;
