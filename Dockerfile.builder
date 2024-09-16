FROM golang:1.22.7-bullseye

RUN apt-get update && apt-get install -y --no-install-recommends clang
