foo bar all: one = cool

all:
	@echo $@ one is $(one)

other:
	@echo $@ one is $(one)

foo: other
	@echo $@:$^ one is $(one)

bar:
	@echo $@ one is $(one)

other2: bar
	@echo $@:$^ one is $(one)

