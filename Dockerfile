FROM mcr.microsoft.com/devcontainers/cpp:0-ubuntu-22.04
ARG LINUX_VERSION_TAG

COPY linux /usr/src/linux

WORKDIR /usr/src/linux
RUN make headers_install modules_install -j $(nproc)
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends kmod

WORKDIR /
