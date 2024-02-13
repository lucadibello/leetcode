FROM mcr.microsoft.com/devcontainers/anaconda:0-3

# Clean apt cache
RUN apt-get clean

# Copy environment.yml (if found) to a temp location so we update the environment. Also
# copy "noop.txt" so the COPY instruction does not fail if no environment.yml exists.
COPY environment.yml* .devcontainer/noop.txt /tmp/conda-tmp/
RUN if [ -f "/tmp/conda-tmp/environment.yml" ]; then umask 0002 && /opt/conda/bin/conda env update -n base -f /tmp/conda-tmp/environment.yml; fi \
    && rm -rf /tmp/conda-tmp

# Activate conda environment
RUN echo "conda activate base" >> /root/.bashrc

# Now, link node to common location
RUN ln -s $(which node) /usr/bin/node

# Clean up
RUN apt-get autoremove -y && apt-get clean -y && rm -rf /var/lib/apt/lists/*