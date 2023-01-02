[[Flask]]

# Setting up Flask Locally
Created:  [[2022-12-16]]

---
### 1. Install virtualenv on Windows
1. Open the command line with administrator privileges.
2. Use **`pip`** to install _virtualenv_ on Windows:
```
py -2 -m pip install virtualenv
```

### 2. Create an Environment
1. Make a separate directory for your project:
```
mkdir <project name>
```

2. Move into the directory:
```
cd <project name>
```
3. Within the directory, create the virtual environment for Flask. When you create the environment, a new folder appears in your project directory with the environment’s name.

-   **For Python 3:**
Create and name a virtual environment in Python 3 with:
```
py -3 -m venv <name of environment>
```

#### Activate the Environment on Windows
For Windows, activate the virtual environment with:
```
<name of environment>\Scripts\activate
```
![[Pasted image 20221216085148.png]]

### 3: Install Flask
Install Flask within the activated environment using **`pip`**:
```
pip install Flask
```


### 4. Final Set-up
Set the _FLASK_APP_ environment variable.
-   **For Windows:**
```cmd
setx FLASK_APP "app.py"
```


```Python
flask run
```


https://phoenixnap.com/kb/install-flask








