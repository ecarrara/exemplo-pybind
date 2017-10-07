PYTHON=$(which python2)
PYTHONPATH=build/$(shell ls -1 build | grep lib)

test:
	PYTHONPATH=${PYTHONPATH} python -m pytest tests
