make_var = I am a make variable
all:
	# Same as running "sh_var='I am a shell variable'; echo $sh_var" in the shell
	sh_var='I am a shell variable'; echo $$sh_var; echo $$PWD; echo $$CC

	# Same as running "echo I am a amke variable" in the shell
	echo $(make_var); echo $(sh_var); echo $(CC)