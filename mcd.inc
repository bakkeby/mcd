#!/bin/bash
# Copyright (c) 2019, Stein Gunnar Bakkeby
# Shorthand function for creating a directory and cd into it afterwards

mcd () {
    mkdir -p "$1" && cd "$1"
}
