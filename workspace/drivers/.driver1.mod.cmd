savedcmd_/home/mirafra/workspace/drivers/driver1.mod := printf '%s\n'   driver1.o | awk '!x[$$0]++ { print("/home/mirafra/workspace/drivers/"$$0) }' > /home/mirafra/workspace/drivers/driver1.mod
