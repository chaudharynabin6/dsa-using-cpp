# xeus-cling

* jupyter kernel based on  C++ interpreter cling
* how to setup xeus-cling

# requirement

* linux os  or mac os
* windows not supported

# steps 
1. goto conda website and downlaod miniconda for linux
    * https://docs.conda.io/en/latest/miniconda.html

1. goto xeus-cling and follow the instruction 
    * https://github.com/jupyter-xeus/xeus-cling

1. goto github isssue of xeus-cling to fix c++ jupyter kernel
    * https://github.com/jupyter-xeus/xeus-cling/issues/217


## Detailed video

https://www.youtube.com/watch?v=VdkfdBm_6W4&t=244s


# for c++ compiler using 

https://linuxconfig.org/how-to-install-g-the-c-compiler-on-ubuntu-18-04-bionic-beaver-linux

command
```bash
sudo apt install build-essential
```

# code runner
install code runner vs code extention

setting.json setup
```json
// code runner
  "code-runner.clearPreviousOutput": true,
  "code-runner.saveFileBeforeRun": true,
  "code-runner.showExecutionMessage": false,

  "code-runner.executorMap": {
      "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt.o && $dir$fileNameWithoutExt.o",
  }
```