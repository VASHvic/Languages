class Graph {
  constructor() {
    this.nodes = new Set();
    this.adjList = {};
  }
  addNode(node) {
    this.nodes.add(node);
    this.adjList[node] = new Set();
  }

  addEdge(node1, node2) {
    this.adjList[node1].add(node2);
    this.adjList[node2].add(node1);
  }
}

const graph = new Graph();
graph.addNode("A");
graph.addNode("B");
graph.addNode("C");
graph.addNode("D");

graph.addEdge("A", "C");
graph.addEdge("A", "B");
graph.addEdge("A", "B");
graph.addEdge("B", "D");
graph.addEdge("C", "B"); 
console.log(graph.nodes);
console.log(graph.adjList["A"]);
console.log(graph.adjList["B"]);
console.log(graph.adjList["C"]);
console.log(graph.adjList["D"]);
console.log(JSON.stringify(graph.adjList, null, 2));