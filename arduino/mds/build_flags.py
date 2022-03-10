import subprocess

revision = (
    subprocess.check_output(
        [
            "git",
            "describe",
            "--abbrev=4",
            "--dirty",
            "--always",
            "--tags",
        ]
    )
    .strip()
    .decode("utf-8")
)

motd = f"\\r\\nStarting gc-1000-gps software. Using version {revision}\\r\\nThis software compiled on today.\\r\\n\\r\\n"

print(f"-DMOTD='\"{motd}\"'")
