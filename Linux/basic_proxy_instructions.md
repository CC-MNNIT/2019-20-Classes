# Basic Instructions

## Proxy configuration

### apt - default package manager on most debian based distros 
Proxy configuration for apt is written in the following file
```bash
/etc/apt/apt.conf
```
To configure apt proxy:
*  Open terminal and open the above mentioned file in any text-editor with _sudo_ . Eg.
```bash
sudo gedit /etc/apt/apt.conf
```
* Add the following exact lines in the file(Change the proxy IP accordingy) :
```bash
Acquire::http::proxy "http://edcguest:edcguest@172.31.102.29:3128/";
Acquire::https::proxy "http://edcguest:edcguest@172.31.102.29:3128/";
Acquire::ftp::proxy "http://edcguest:edcguest@172.31.102.29:3128/";
```
* Save the file (Ctrl+S for gedit) and close the editor.
* Run the following command to test the configuration.
```bash
sudo apt update
``` 
* If the command executes without error the configurattion is successful.


### pacman - default package manager on Arch based distros
pacman uses the terminal environment varialbles for proxy configurations.

* To temporarily configure proxy for pacman, open the terminal and type the following commands:
```bash
export http_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
export https_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
export ftp_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
```
* The above lines set proxy variables for the terminal, so all programs that use the terminal environment variables for proxy configuration like `wget`, `curl` etc. will also use the above proxy settings.

* To make this setting permanent, add the above two lines in the `.bashrc` file:
    * First create a backup of the `.bashrc` file.
    ```bash
    cp ~/.bashrc ~/.bashrc.bkp
    ```
    * Add the following lines to the last of the `.bashrc` file. Open `.bashrc` in a text editor eg: `gedit ~/.bashrc`
    ```bash
     export http_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
     export https_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
     export ftp_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
     ```

### yum - default package manager for CentOS, RHEL etc.
Proxy configuration for yum can be done through `/etc/yum.conf`
* Open the file with sudo permissions eg: `sudo vi /etc/yum.conf` or `sudo gedit /etc/yum.conf`
* Under the `[main]` section define proxy settings:
```bash
[main]
proxy=http://172.31.102.29:3128
proxy_username=edcguest
proxy_password=edcguest
```
* Save the file and close the editor.

* Alternate way to set the proxy:
    * Add the following lines to the last of the `/root/.bashrc` file. Open `/root/.bashrc` in a text editor eg: `sudo gedit ~/.bashrc`
    ```bash
     export http_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
     export https_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
     export ftp_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
     ```

### Configuring proxy on the terminal
To configure proxy on the terminal:
```bash
export http_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
export https_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
export ftp_proxy="http://edcguest:edcguest@172.31.102.29:3128/"
```
* To make this setting permanent add the above lines in `~/.bashrc` file.

### Configuring git proxy
To configure git proxy:
```
git config --global http.proxy "http://edcguest:edcguest@172.31.102.29:3128/"
git config --global https.proxy "http://edcguest:edcguest@172.31.102.29:3128/"
```
