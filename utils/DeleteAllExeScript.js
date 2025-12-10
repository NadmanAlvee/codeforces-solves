import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

const getExe = new RegExp(".exe$", "i");
let filterdFiles = [];

function getExeFiles() {
  return new Promise((resolve, reject) => {
    fs.readdir(path.resolve(__dirname, "../800/"), (error, files) => {
      if (!error && files) {
        resolve(files.filter((file) => getExe.test(file)));
      } else {
        reject("An error occured while identifying files: ", error.message);
      }
    });
  });
}

filterdFiles = await getExeFiles();
console.log("filterdFiles: ", filterdFiles);

function deleteExeFiles(list) {
  const promises = list.map(
    (file) =>
      new Promise((resolve, reject) => {
        fs.unlink(path.resolve(__dirname, "../800/", file), (err) => {
          if (err) {
            console.error("Failed to delete file:", file, err);
            return reject(err);
          }
          resolve(file);
        });
      })
  );

  return Promise.all(promises);
}

await deleteExeFiles(filterdFiles);
