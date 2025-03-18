# How to test

1. Create a new conda environment

```
    conda create --name test_tinyxml
    conda activate test_tinyxml
```

2. Get tinyxml2 conda package

    Download a pre-built package:
    https://anaconda.org/andpro/tinyxml2

    Alternatively, you can build it yourself from the conda package sources:
```
    git clone git@github.com:andriy-p/test-conda.git && cd test-conda
    conda build .
```

3. Locate and install the downloaded or built package and libc++

```
    conda install ~/Downloads/tinyxml2-11.0.0-ha5a8b8e_0.conda
    conda install libcxx
```

4. Build the app

```
    mkdir build
    cd build

    cmake ..
    make

```

5. Run the app

```
    ./tiny_test ../example.xml
```