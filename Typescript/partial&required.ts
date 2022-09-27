interface Sale {
  customer: string;
  total: number;
  products?: string[];
}
const mySale: Partial<Sale> = {
  total: 3,
};

//afegir partialAssign

// function partialAssign(el1: T) : Partial<T> {
//   return el1
// }
const mySale2: Required<Partial<Sale>> = {
  customer: "asd",
  products: ["a"],
  total: 2,
};
