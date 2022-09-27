const person = {
  name: "Dom",
  hobbies: [{h1: "h1"}, {h2: "h2"}],
};
const personCloned = {...person};
console.log(person === personCloned);
console.log(person.hobbies === personCloned.hobbies);
person.hobbies.push({a: "a"});
console.log(person.hobbies === personCloned.hobbies);
console.log(personCloned);

// const personCloned2 = structuredClone(person); // node 17+
//soluciona que ja no usa la mateixa referencia per a nested
