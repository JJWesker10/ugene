# UGENE
Download UGENE: [https://ugeneunipro.github.io/ugene/](https://ugeneunipro.github.io/ugene/)

## Building UGENE

### Prerequisites

Qt (>= 5.12.0 and <= 5.15.x) with the following components installed with Qt installer:
* Desktop
* QtScript

### For Windows users:

To build with devenv (Visual Studio):

1. `qmake -r -tp vc ugene.pro`
2. open ugene.sln from Visual Studio and build or run `devenv.exe ugene.sln /Build` from MSVC command line

To build with nmake:

1. `qmake -r ugene.pro`
2. run `nmake`, `nmake debug` or `nmake release` to build UGENE

### For *nix users:

To build and install UGENE on *nix:

1. `qmake -r PREFIX=/opt/ugene-${VERSION}`.
2. `make -j 4`
3. `sudo make install`
4. `sudo ln -s /opt/ugene-${VERSION}/ugene /usr/bin`
5. `ugene -ui`

> Note: you do not need 'sudo' if you select your own folder for the installation.

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
**APPLICATION FUNCTIONALITIES**

### Creating a Workflow
1) Click on "Run or Create a Workflow" option in the main page.
2) Choose your Output Directory, hit okay.
3) To view a sample, click on the "Samples" Tab. To view the elemenets, click on the "Elements" Tab on the left side of the screen.
4) On the same tab, click on the + button on the category you wish to put an element to the ER Diagram.
5) Click and Drag your option into the workspace.
6) To make a relationship connection, locate the small circle in the element, and drag it to the next available element.
7) Ensure that each element has their supplied input data.
8) Follow Steps 3-7 as you build your own workflow.

### USING THE CREATE-A-SEQUENCE TOOL
1) Click on the "Create Sequence" option in the main dashboard.
2) Paste any genomic data you've recollected in the "Paste Data Here" section. Samples also work here, too.
3) If you wish to do your own custom settings, check the "Custom Settings"
4) Choose your file format, name and which file will this sequence be saved.
5) Click on "Create"
6) To perform analysis functionalities, select an input pattern.
7) Right-Click and select "Analyze"
8) Choose any of the methods you want. Note that these options are also available on the Top Taskbar.
9) To export the sequence into an image, click on the Camera icon.

### TO ACCESS A REMOTE DATABASE or the NCBI Database
You can do so by clicking on the "FILE" tab and accessing either option.
Make sure to have the resource ID at the ready in order to connect.


### SETTINGS
The user is free to personalize which of their plugins are active. Some of the plugins available in the app are as follows:
DNA Annotator, DNA/RNA Graph Package, 3D Structure Viewwer, Chromatogram View, OpenCL Support, Restriction Analysis, among others.

### NOTE
All of the functionalities within the CREATE-A-SEQUENCE TOOL are also located in the main dashboard.
You can prompt to design your Query and Workflow there, too! Everything is located in the Tools tab.
