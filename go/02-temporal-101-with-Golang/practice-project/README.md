### DESCRIPTION
> - Sample project for the course `Temporal 101 with Golang`.

<br />
<br />



### LOCAL DEVELOPMENT
> - Docker files dependencies.
```bash
# Clone the temporal docker-compose repository.
git clone https://github.com/temporalio/docker-compose.git

# Change directory to the docker-compose.
cd docker-compose

# Start the containers
# up: Command to start and run the containers.
# d: A flag to detach the containers and run it in the background.
docker compose up -d

# Invoke the tctl.
docker exec temporal-admin-tools tctl <commands-here>

# Setting up an alias for the tctl.
# alias: A user defined shortcut for a series of command.
alias tctl="docker exec temporal-admin-tools tctl"
```

> - Automate the executable binary file.

```bash
# Change permission of the app script.
# chmod: A command used to change the permissions of a file or directory.
# +x: This flag adds execute permission to the file.
sudo chmod +x build

# Execute the app.
./build && ./app
```
