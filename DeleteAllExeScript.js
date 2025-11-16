import fs from "fs";

const getExe = new RegExp(".exe$", "i");
let filterdFiles = [];

function getExeFiles() {
  return new Promise((resolve, reject) => {
    fs.readdir("./", (error, files) => {
      if (!error && files) {
        resolve(files.filter((file) => getExe.test(file)));
      } else {
        reject("An error occured while identifying files: ", error.message);
      }
    });
  });
}

filterdFiles = await getExeFiles();

function deleteExeFiles(list) {
  const promises = list.map(
    (file) =>
      new Promise((resolve, reject) => {
        fs.unlink(file, (err) => {
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
