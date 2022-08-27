import {createReadStream} from "node:fs";
import {writeFile} from "node:fs/promises";

// await writeFile("./test.txt", "Hello Wrold!", "utf-8");

const stream = createReadStream("./test.txt");
stream.on("end", () => console.log("fin"));
stream.on("data", (chunk) => console.log(chunk.toString()));
