# An example makefile to generate a pdf slideshow from markdown
# Uses pandoc, beamer
#
# Ideas from this video https://youtu.be/dum7q6UXiCE
#
# A-B Transport, SNHU

# Get vars
hash := $(shell git describe --abbrev=6 --always --tags --dirty)
builddate := $(shell date +"%m-%d-%y")
pwd = $(shell pwd)
builddir = $(pwd)/_build

# Sphinx defs
SPHINXOPTS    ?=
SPHINXBUILD   ?= sphinx-build
SOURCEDIR     = .

# Generate pres
pres: generate_pres clean_filenames

# Generate artifacts and output binaries
generate_pres:
	# Premake relevant dirs
	mkdir -p $(builddir)/temp
	mkdir -p $(builddir)/pdf

	# Copy all presentations to _build
	cp -r presentations/* $(builddir)/temp

	# Update the build-hash
	find $(builddir)/temp -type f -name '*.md' -execdir sed -i "s/&hash/$(hash)/" {} \;

	# Update the date
	find $(builddir)/temp -type f -name '*.md' -execdir sed -i "s/&date/$(builddate)/" {} \;

	# Convert all presentations to pdf
	find $(builddir)/temp -type f -name '*.md' -execdir pandoc {} -t beamer -V colortheme:orchid -o $(builddir)/pdf/{}.pdf \;

clean_filenames:
	# Clean presentaiton names 
	cd $(builddir)/pdf/ && rename 's/.md.pdf$$/.pdf/' *.md.pdf

# General doc cleanup
clean:
	git clean -fdX

# Put it first so that "make" without argument is like "make help".
help:
	@$(SPHINXBUILD) -M help "$(SOURCEDIR)" "$(builddir)" $(SPHINXOPTS) $(O)

# Explicit sphinx doctypes.
latexpdf:
	@$(SPHINXBUILD) -M latexpdf "$(SOURCEDIR)" "$(builddir)" $(SPHINXOPTS) $(O)
html:
	@$(SPHINXBUILD) -M html "$(SOURCEDIR)" "$(builddir)" $(SPHINXOPTS) $(O)
